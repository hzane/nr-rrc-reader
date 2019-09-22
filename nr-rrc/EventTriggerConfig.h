/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_EventTriggerConfig_H_
#define	_EventTriggerConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NR-RS-Type.h"
#include "ReportInterval.h"
#include "NativeEnumerated.h"
#include "MeasReportQuantity.h"
#include "NativeInteger.h"
#include "BOOLEAN.h"
#include "MeasTriggerQuantity.h"
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include "constr_SEQUENCE.h"
#include "MeasTriggerQuantityOffset.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventTriggerConfig__eventId_PR {
	EventTriggerConfig__eventId_PR_NOTHING,	/* No components present */
	EventTriggerConfig__eventId_PR_eventA1,
	EventTriggerConfig__eventId_PR_eventA2,
	EventTriggerConfig__eventId_PR_eventA3,
	EventTriggerConfig__eventId_PR_eventA4,
	EventTriggerConfig__eventId_PR_eventA5,
	EventTriggerConfig__eventId_PR_eventA6
	/* Extensions may appear below */
	
} EventTriggerConfig__eventId_PR;
typedef enum EventTriggerConfig__reportAmount {
	EventTriggerConfig__reportAmount_r1	= 0,
	EventTriggerConfig__reportAmount_r2	= 1,
	EventTriggerConfig__reportAmount_r4	= 2,
	EventTriggerConfig__reportAmount_r8	= 3,
	EventTriggerConfig__reportAmount_r16	= 4,
	EventTriggerConfig__reportAmount_r32	= 5,
	EventTriggerConfig__reportAmount_r64	= 6,
	EventTriggerConfig__reportAmount_infinity	= 7
} e_EventTriggerConfig__reportAmount;
typedef enum EventTriggerConfig__reportAddNeighMeas {
	EventTriggerConfig__reportAddNeighMeas_setup	= 0
} e_EventTriggerConfig__reportAddNeighMeas;

/* Forward declarations */
struct MeasReportQuantity;

/* EventTriggerConfig */
typedef struct EventTriggerConfig {
	struct EventTriggerConfig__eventId {
		EventTriggerConfig__eventId_PR present;
		union {
			struct EventTriggerConfig__eventId__eventA1 {
				MeasTriggerQuantity_t	 a1_Threshold;
				BOOLEAN_t	 reportOnLeave;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA1;
			struct EventTriggerConfig__eventId__eventA2 {
				MeasTriggerQuantity_t	 a2_Threshold;
				BOOLEAN_t	 reportOnLeave;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA2;
			struct EventTriggerConfig__eventId__eventA3 {
				MeasTriggerQuantityOffset_t	 a3_Offset;
				BOOLEAN_t	 reportOnLeave;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				BOOLEAN_t	 useWhiteCellList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA3;
			struct EventTriggerConfig__eventId__eventA4 {
				MeasTriggerQuantity_t	 a4_Threshold;
				BOOLEAN_t	 reportOnLeave;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				BOOLEAN_t	 useWhiteCellList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA4;
			struct EventTriggerConfig__eventId__eventA5 {
				MeasTriggerQuantity_t	 a5_Threshold1;
				MeasTriggerQuantity_t	 a5_Threshold2;
				BOOLEAN_t	 reportOnLeave;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				BOOLEAN_t	 useWhiteCellList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA5;
			struct EventTriggerConfig__eventId__eventA6 {
				MeasTriggerQuantityOffset_t	 a6_Offset;
				BOOLEAN_t	 reportOnLeave;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				BOOLEAN_t	 useWhiteCellList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *eventA6;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} eventId;
	NR_RS_Type_t	 rsType;
	ReportInterval_t	 reportInterval;
	long	 reportAmount;
	MeasReportQuantity_t	 reportQuantityCell;
	long	 maxReportCells;
	struct MeasReportQuantity	*reportQuantityRS_Indexes;	/* OPTIONAL */
	long	*maxNrofRS_IndexesToReport;	/* OPTIONAL */
	BOOLEAN_t	 includeBeamMeasurements;
	long	*reportAddNeighMeas;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventTriggerConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAmount_41;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAddNeighMeas_55;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EventTriggerConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_EventTriggerConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_EventTriggerConfig_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasReportQuantity.h"

#endif	/* _EventTriggerConfig_H_ */
#include "asn_internal.h"
