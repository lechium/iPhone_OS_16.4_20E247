//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequest
{
}

+ (Class)configurationClass;	// IMP=0x008000000007879b
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x0080000000077d63
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x008000000007905e
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;	// IMP=0x0000000000077636
- (unsigned long long)detectionLevel;	// IMP=0x00000000000775a5
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007727d
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000077046
- (long long)dependencyProcessingOrdinality;	// IMP=0x0000000000077034

@end
