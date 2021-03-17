#pragma once
enum class CheckInOrOutResult
{
	Success,
	BookNotFound,
	AlreadyCheckOut,
	AlreadyCheckIn,
	Failure
};
