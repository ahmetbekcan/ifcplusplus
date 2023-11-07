/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcRailwayPartTypeEnum = ENUMERATION OF	(ABOVETRACK	,DILATIONTRACK	,LINESIDE	,LINESIDEPART	,PLAINTRACK	,SUBSTRUCTURE	,TRACK	,TRACKPART	,TURNOUTTRACK	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcRailwayPartTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcRailwayPartTypeEnumEnum
		{
			ENUM_ABOVETRACK,
			ENUM_DILATIONTRACK,
			ENUM_LINESIDE,
			ENUM_LINESIDEPART,
			ENUM_PLAINTRACK,
			ENUM_SUBSTRUCTURE,
			ENUM_TRACK,
			ENUM_TRACKPART,
			ENUM_TURNOUTTRACK,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcRailwayPartTypeEnum() = default;
		IfcRailwayPartTypeEnum( IfcRailwayPartTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2181869104; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcRailwayPartTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcRailwayPartTypeEnumEnum m_enum;
	};
}
