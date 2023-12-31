//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNANFDDetectorCompoundRequest
{
}

+ (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000290ad4
+ (Class)configurationClass;	// IMP=0x0080000000290ac3
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000290514
+ (long long)compoundRequestRevisionForRequest:(id)arg1;	// IMP=0x00800000002903ba
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x00800000002914d6
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;	// IMP=0x000000000028fe1a
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000028fb81
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x000000000028fab2
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000028faa0
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000028f47a
- (long long)dependencyProcessingOrdinality;	// IMP=0x000000000028f468
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000028f32c

@end

