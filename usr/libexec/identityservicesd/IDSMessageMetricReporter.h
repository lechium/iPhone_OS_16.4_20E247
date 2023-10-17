//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSMessageMetricReporter : NSObject
{
}

+ (_Bool)_shouldIgnoreAutoBugCaptureForLegacyFailure:(id)arg1;	// IMP=0x004000000005ddf0
+ (_Bool)_shouldIgnoreMPError:(id)arg1;	// IMP=0x001000000005dd60
+ (_Bool)_shouldIgnoreAutoBugCaptureForECFailure:(id)arg1;	// IMP=0x001000000005dbe0
+ (void)noteKeyGenerationForMetric;	// IMP=0x001000000005db10
+ (id)errorToReportForLegacyError:(id)arg1;	// IMP=0x001000000005d6b0
+ (id)errorToReportForECError:(id)arg1;	// IMP=0x001000000005d250
+ (void)reportMessageMetricWithMetadata:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 command:(id)arg4 decryptedEqual:(_Bool)arg5 triedLastResort:(_Bool)arg6 ECError:(id)arg7 legacyError:(id)arg8 fromDestination:(id)arg9;	// IMP=0x001000000005b8a0
+ (void)reportEncryptionSideMetricWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x001000000005b340
+ (id)messageMetadataWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x001000000005b170
+ (id)_metadataWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x001000000005ad20

@end
