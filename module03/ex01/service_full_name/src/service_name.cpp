#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/srv/summ_full_name.hpp"

void handle_service(
  const std::shared_ptr<tutorial_interfaces::srv::SummFullName::Request> request,
  std::shared_ptr<tutorial_interfaces::srv::SummFullName::Response> response)
{
  response->full_name = request->surname + " " + request->name + " " + request->patronymic;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\n%s %s %s",
              request->surname.c_str(), request->name.c_str(), request->patronymic.c_str());
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: %s",
              response->full_name.c_str());
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("service_name");

  auto service = node->create_service<tutorial_interfaces::srv::SummFullName>(
    "SummFullName", &handle_service);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to sum full names.");

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
