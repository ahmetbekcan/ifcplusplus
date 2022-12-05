/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSchedulingTime.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcRecurrencePattern;
	class IFCQUERY_EXPORT IfcDate;
	//ENTITY
	class IFCQUERY_EXPORT IfcWorkTime : public IfcSchedulingTime
	{ 
	public:
		IfcWorkTime() = default;
		IfcWorkTime( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 6; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 1236880293; }

		// IfcSchedulingTime -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>				m_Name;						//optional
		//  shared_ptr<IfcDataOriginEnum>		m_DataOrigin;				//optional
		//  shared_ptr<IfcLabel>				m_UserDefinedDataOrigin;	//optional

		// IfcWorkTime -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcRecurrencePattern>	m_RecurrencePattern;		//optional
		shared_ptr<IfcDate>					m_StartDate;				//optional
		shared_ptr<IfcDate>					m_FinishDate;				//optional
	};
}
