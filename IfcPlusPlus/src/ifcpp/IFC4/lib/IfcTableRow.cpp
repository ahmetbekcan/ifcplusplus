/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcTableRow.h"
#include "ifcpp/IFC4/include/IfcValue.h"

// ENTITY IfcTableRow 
IfcTableRow::IfcTableRow() {}
IfcTableRow::IfcTableRow( int id ) { m_id = id; }
IfcTableRow::~IfcTableRow() {}
shared_ptr<IfcPPObject> IfcTableRow::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTableRow> copy_self( new IfcTableRow() );
	for( size_t ii=0; ii<m_RowCells.size(); ++ii )
	{
		auto item_ii = m_RowCells[ii];
		if( item_ii )
		{
			copy_self->m_RowCells.push_back( dynamic_pointer_cast<IfcValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_IsHeading ) { copy_self->m_IsHeading = dynamic_pointer_cast<IfcBoolean>( m_IsHeading->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTableRow::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCTABLEROW" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_RowCells.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcValue>& type_object = m_RowCells[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_IsHeading ) { m_IsHeading->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcTableRow::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcTableRow::toString() const { return L"IfcTableRow"; }
void IfcTableRow::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTableRow, expecting 2, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readSelectList( args[0], m_RowCells, map );
	m_IsHeading = IfcBoolean::createObjectFromSTEP( args[1], map );
}
void IfcTableRow::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	if( m_RowCells.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> RowCells_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_RowCells.begin(), m_RowCells.end(), std::back_inserter( RowCells_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "RowCells", RowCells_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "IsHeading", m_IsHeading ) );
}
void IfcTableRow::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
}
void IfcTableRow::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcTableRow::unlinkFromInverseCounterparts()
{
}