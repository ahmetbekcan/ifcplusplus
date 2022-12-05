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
	// TYPE IfcWorkPlanTypeEnum = ENUMERATION OF	(ACTUAL	,BASELINE	,PLANNED	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcWorkPlanTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcWorkPlanTypeEnumEnum
		{
			ENUM_ACTUAL,
			ENUM_BASELINE,
			ENUM_PLANNED,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcWorkPlanTypeEnum() = default;
		IfcWorkPlanTypeEnum( IfcWorkPlanTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2706281606; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcWorkPlanTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcWorkPlanTypeEnumEnum m_enum;
	};
}
