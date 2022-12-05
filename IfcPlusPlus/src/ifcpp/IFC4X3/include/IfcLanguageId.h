/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcIdentifier.h"

namespace IFC4X3
{
	// TYPE IfcLanguageId = IfcIdentifier;
	class IFCQUERY_EXPORT IfcLanguageId : public IfcIdentifier
	{
	public:
		IfcLanguageId() = default;
		IfcLanguageId( std::string value ) { m_value = value; }
		virtual uint32_t classID() const { return 1275358634; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcLanguageId> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
	};
}
