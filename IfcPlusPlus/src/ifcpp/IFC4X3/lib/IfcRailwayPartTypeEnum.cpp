/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcRailwayPartTypeEnum.h"

// TYPE IfcRailwayPartTypeEnum = ENUMERATION OF	(ABOVETRACK	,DILATIONTRACK	,LINESIDE	,LINESIDEPART	,PLAINTRACK	,SUBSTRUCTURE	,TRACK	,TRACKPART	,TURNOUTTRACK	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcRailwayPartTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCRAILWAYPARTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ABOVETRACK:	stream << ".ABOVETRACK."; break;
		case ENUM_DILATIONTRACK:	stream << ".DILATIONTRACK."; break;
		case ENUM_LINESIDE:	stream << ".LINESIDE."; break;
		case ENUM_LINESIDEPART:	stream << ".LINESIDEPART."; break;
		case ENUM_PLAINTRACK:	stream << ".PLAINTRACK."; break;
		case ENUM_SUBSTRUCTURE:	stream << ".SUBSTRUCTURE."; break;
		case ENUM_TRACK:	stream << ".TRACK."; break;
		case ENUM_TRACKPART:	stream << ".TRACKPART."; break;
		case ENUM_TURNOUTTRACK:	stream << ".TURNOUTTRACK."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcRailwayPartTypeEnum> IFC4X3::IfcRailwayPartTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcRailwayPartTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcRailwayPartTypeEnum>(); }
	shared_ptr<IfcRailwayPartTypeEnum> type_object( new IfcRailwayPartTypeEnum() );
	if( std_iequal( arg, ".ABOVETRACK." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_ABOVETRACK;
	}
	else if( std_iequal( arg, ".DILATIONTRACK." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_DILATIONTRACK;
	}
	else if( std_iequal( arg, ".LINESIDE." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_LINESIDE;
	}
	else if( std_iequal( arg, ".LINESIDEPART." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_LINESIDEPART;
	}
	else if( std_iequal( arg, ".PLAINTRACK." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_PLAINTRACK;
	}
	else if( std_iequal( arg, ".SUBSTRUCTURE." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_SUBSTRUCTURE;
	}
	else if( std_iequal( arg, ".TRACK." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_TRACK;
	}
	else if( std_iequal( arg, ".TRACKPART." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_TRACKPART;
	}
	else if( std_iequal( arg, ".TURNOUTTRACK." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_TURNOUTTRACK;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcRailwayPartTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
