/*
obs-websocket
Copyright (C) 2016-2021 Stephane Lepin <stephane.lepin@gmail.com>
Copyright (C) 2020-2021 Kyle Manning <tt2468@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program. If not, see <https://www.gnu.org/licenses/>
*/

#pragma once

#include "../types/RequestStatus.h"
#include "../../utils/Json.h"

struct RequestResult {
	RequestResult(RequestStatus::RequestStatus statusCode =
			      RequestStatus::Success,
		      json responseData = nullptr, std::string comment = "");
	static RequestResult Success(json responseData = nullptr);
	static RequestResult Error(RequestStatus::RequestStatus statusCode,
				   std::string comment = "");
	RequestStatus::RequestStatus StatusCode;
	json ResponseData;
	std::string Comment;
	size_t SleepFrames;
};
