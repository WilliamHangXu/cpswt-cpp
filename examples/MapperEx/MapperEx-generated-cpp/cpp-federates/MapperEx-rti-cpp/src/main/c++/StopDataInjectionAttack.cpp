
// This code has been generated by the C2W code generator.
// Do not edit manually!

#include "StopDataInjectionAttack.hpp"




void StopDataInjectionAttack::init( RTI::RTIambassador *rti ) {
	static bool isInitialized = false;
	if ( isInitialized ) {
		return;
	}
	isInitialized = true;

	AttacksNotYetImplemented::init( rti );

	bool isNotInitialized = true;
	while( isNotInitialized ) {
		try {
			getHandle() = rti->getInteractionClassHandle( "InteractionRoot.C2WInteractionRoot.ActionBase.OmnetCommand.AttacksNotYetImplemented.StopDataInjectionAttack" );
			isNotInitialized = false;
		} catch ( RTI::FederateNotExecutionMember & ) {
			std::cerr << getInitErrorMessage() << "Federate Not Execution Member" << std::endl;
			return;				
		} catch ( RTI::NameNotFound & ) {
			std::cerr << getInitErrorMessage() << "Name Not Found" << std::endl;
			return;				
		} catch ( ... ) {
			std::cerr << getInitErrorMessage() << "Exception caught ... retry" << std::endl;
		}
	}

	getClassNameHandleMap().insert(  std::make_pair( "StopDataInjectionAttack", get_handle() )  );
	getClassHandleNameMap().insert(  std::make_pair( get_handle(), "StopDataInjectionAttack" )  );


	isNotInitialized = true;
	while( isNotInitialized ) {
		try {		
			
			
			get_packet_handle_var() = rti->getParameterHandle( "packet", get_handle() );
			get_toNode_handle_var() = rti->getParameterHandle( "toNode", get_handle() );
			get_fromNode_handle_var() = rti->getParameterHandle( "fromNode", get_handle() );
			isNotInitialized = false;
		} catch ( RTI::FederateNotExecutionMember & ) {
			std::cerr << getInitErrorMessage() << "Federate Not Execution Member" << std::endl;
			return;				
		} catch ( RTI::InteractionClassNotDefined & ) {
			std::cerr << getInitErrorMessage() << "Interaction Class Not Defined" << std::endl;
			return;				
		} catch ( RTI::NameNotFound & ) {
			std::cerr << getInitErrorMessage() << "Name Not Found" << std::endl;
			return;				
		} catch ( ... ) {
			std::cerr << getInitErrorMessage() << "Exception caught ... retry" << std::endl;
		}
	}
	
	
	getDatamemberNameHandleMap().insert(  std::make_pair( "StopDataInjectionAttack,packet", get_packet_handle() )  );
	
	getDatamemberHandleNameMap().insert(  std::make_pair( get_packet_handle(), "packet" )  );
	
	getDatamemberTypeMap().insert( std::make_pair("packet", "String") );
	
	
	getDatamemberNameHandleMap().insert(  std::make_pair( "StopDataInjectionAttack,toNode", get_toNode_handle() )  );
	
	getDatamemberHandleNameMap().insert(  std::make_pair( get_toNode_handle(), "toNode" )  );
	
	getDatamemberTypeMap().insert( std::make_pair("toNode", "String") );
	
	
	getDatamemberNameHandleMap().insert(  std::make_pair( "StopDataInjectionAttack,fromNode", get_fromNode_handle() )  );
	
	getDatamemberHandleNameMap().insert(  std::make_pair( get_fromNode_handle(), "fromNode" )  );
	
	getDatamemberTypeMap().insert( std::make_pair("fromNode", "String") );
	

}

void StopDataInjectionAttack::publish( RTI::RTIambassador *rti ) {
	if ( getIsPublished() ) {
		return;
	}

	init( rti );



	bool isNotPublished = true;
	while( isNotPublished ) {
		try {
			rti->publishInteractionClass( get_handle() );
			isNotPublished = false;
		} catch ( RTI::FederateNotExecutionMember & ) {
			std::cerr << getPublishErrorMessage() << "Federate Not Execution Member" << std::endl;
			return;
		} catch ( RTI::InteractionClassNotDefined & ) {
			std::cerr << getPublishErrorMessage() << "Interaction Class Not Defined" << std::endl;
			return;
		} catch ( ... ) {
			std::cerr << getPublishErrorMessage() << "Exception caught ... retry" << std::endl;
		}
	}

	getIsPublished() = true;
}

void StopDataInjectionAttack::unpublish( RTI::RTIambassador *rti ) {
	if ( !getIsPublished() ) {
		return;
	}

	init( rti );

	bool isNotUnpublished = true;
	while( isNotUnpublished ) {
		try {
			rti->unpublishInteractionClass( get_handle() );
			isNotUnpublished = false;
		} catch ( RTI::FederateNotExecutionMember & ) {
			std::cerr << getUnpublishErrorMessage() + "Federate Not Execution Member" << std::endl;
			return;
		} catch ( RTI::InteractionClassNotDefined & ) {
			std::cerr << getUnpublishErrorMessage() + "Interaction Class Not Defined" << std::endl;
			return;
		} catch ( RTI::InteractionClassNotPublished & ) {
			std::cerr << getUnpublishErrorMessage() + "Interaction Class Not Published" << std::endl;
			return;
		} catch ( ... ) {
			std::cerr << getUnpublishErrorMessage() << "Exception caught ... retry" << std::endl;
		}
	}

	getIsPublished() = false;
}

void StopDataInjectionAttack::subscribe( RTI::RTIambassador *rti ) {
	if ( getIsSubscribed() ) {
		return;
	}

	init( rti );

	
	bool isNotSubscribed = true;
	while( isNotSubscribed ) {
		try {
			rti->subscribeInteractionClass( get_handle() );
			isNotSubscribed = false;
		} catch ( RTI::FederateNotExecutionMember & ) {
			std::cerr << getSubscribeErrorMessage() << "Federate Not Execution Member" << std::endl;
			return;
		} catch ( RTI::InteractionClassNotDefined & ) {
			std::cerr << getSubscribeErrorMessage() << "Interaction Class Not Defined" << std::endl;
			return;
		} catch ( ... ) {
			std::cerr << getSubscribeErrorMessage() << "Exception caught ... retry" << std::endl;
		}
	}

	getIsSubscribed() = true;
}
	
void StopDataInjectionAttack::unsubscribe( RTI::RTIambassador *rti ) {
	if ( !getIsSubscribed() ) {
		return;
	}

	init( rti );
	
	bool isNotUnsubscribed = true;
	while( isNotUnsubscribed ) {
		try {
			rti->unsubscribeInteractionClass( get_handle() );
			isNotUnsubscribed = false;
		} catch ( RTI::FederateNotExecutionMember & ) {
			std::cerr << getUnsubscribeErrorMessage() << "Federate Not Execution Member" << std::endl;
			return;
		} catch ( RTI::InteractionClassNotDefined & ) {
			std::cerr << getUnsubscribeErrorMessage() << "Interaction Class Not Defined" << std::endl;
			return;
		} catch ( RTI::InteractionClassNotSubscribed & ) {
			std::cerr << getUnsubscribeErrorMessage() << "Interaction Class Not Subscribed" << std::endl;
			return;
		} catch ( ... ) {
			std::cerr << getUnsubscribeErrorMessage() << "Exception caught ... retry" << std::endl;
		}
	}

	getIsSubscribed() = false;
}

bool StopDataInjectionAttack::static_init( void ) {
	static bool isInitialized = false;
	if ( isInitialized ) {
		return true;
	}
	isInitialized = true;
	
	getClassNameSet().insert( "StopDataInjectionAttack" );
	
	getClassNameFactoryMap().insert(  std::make_pair( "StopDataInjectionAttack", &StopDataInjectionAttack::factory )  );
	getClassNamePublishMap().insert(   std::make_pair(  "StopDataInjectionAttack", (PubsubFunctionPtr)( &StopDataInjectionAttack::publish )  )   );
	getClassNameUnpublishMap().insert(   std::make_pair(  "StopDataInjectionAttack", (PubsubFunctionPtr)( &StopDataInjectionAttack::unpublish )  )   );
	getClassNameSubscribeMap().insert(   std::make_pair(  "StopDataInjectionAttack", (PubsubFunctionPtr)( &StopDataInjectionAttack::subscribe )  )   );
	getClassNameUnsubscribeMap().insert(   std::make_pair(  "StopDataInjectionAttack", (PubsubFunctionPtr)( &StopDataInjectionAttack::unsubscribe )  )   );

	getDatamemberClassNameVectorPtrMap().insert(  std::make_pair( "StopDataInjectionAttack", &getDatamemberNames() )  );
	getAllDatamemberClassNameVectorPtrMap().insert(  std::make_pair( "StopDataInjectionAttack", &getAllDatamemberNames() )  );
	
	
	
	getDatamemberNames().push_back( "packet" );
	getDatamemberNames().push_back( "toNode" );
	getDatamemberNames().push_back( "fromNode" );
	
	
	getAllDatamemberNames().push_back( "packet" );
	getAllDatamemberNames().push_back( "toNode" );
	getAllDatamemberNames().push_back( "fromNode" );



	return true;
}

std::ostream &operator<<( std::ostream &os, StopDataInjectionAttack::SP entitySP ) {
	return os << *entitySP;
}
std::ostream &operator<<( std::ostream &os, const StopDataInjectionAttack &entity ) {
	return os << "StopDataInjectionAttack("  << "sourceFed:" << entity.get_sourceFed() << ", " << "uniqueCommandID:" << entity.get_uniqueCommandID() << ", " << "originFed:" << entity.get_originFed() << ", " << "packet:" << entity.get_packet() << ", " << "toNode:" << entity.get_toNode() << ", " << "fromNode:" << entity.get_fromNode() << ", " << "federateFilter:" << entity.get_federateFilter() << ", " << "actualLogicalGenerationTime:" << entity.get_actualLogicalGenerationTime()	<< ")";
}





StopDataInjectionAttack::ParameterHandleValuePairSetSP StopDataInjectionAttack::createDatamemberHandleValuePairSet( RTI::ULong count ) {
	ParameterHandleValuePairSetSP datamembers = Super::createDatamemberHandleValuePairSet( count + 3 );

	std::string stringConversion;
		

	
	
	stringConversion = static_cast< std::string >(  TypeMedley( get_packet() )  );
	datamembers->add( get_packet_handle(), stringConversion.c_str(), stringConversion.size() );
	
	stringConversion = static_cast< std::string >(  TypeMedley( get_toNode() )  );
	datamembers->add( get_toNode_handle(), stringConversion.c_str(), stringConversion.size() );
	
	stringConversion = static_cast< std::string >(  TypeMedley( get_fromNode() )  );
	datamembers->add( get_fromNode_handle(), stringConversion.c_str(), stringConversion.size() );
	

	return datamembers;
}
