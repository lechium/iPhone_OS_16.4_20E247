//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VNClusteringReadOnly><VNClusteringCancelling;

__attribute__((visibility("hidden")))
@interface VNClustererReadOnlyContext
{
    id <VNClusteringReadOnly><VNClusteringCancelling> _clusterer;	// 64 = 0x40
}

+ (id)nonGroupedGroupID;	// IMP=0x001000000002e767
+ (id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002e73e
+ (id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002e654
+ (id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002e5e8
+ (id)representativenessForFaces:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002e5bf
- (void).cxx_destruct;	// IMP=0x000000000002e4d9
- (id)maximumFaceIdInModelAndReturnError:(id *)arg1;	// IMP=0x000000000002e4bc
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002e48f
- (id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002e1fb
- (id)distanceBetweenLevel1Clusters:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e1ce
- (id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002e1a1
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e16f
- (id)getAllClustersAndReturnError:(id *)arg1;	// IMP=0x000000000002e152
- (id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e125
- (id)allClusteredFaceIdsAndReturnError:(id *)arg1;	// IMP=0x000000000002e108
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 torsoprintRequestRevision:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x000000000002dfa5
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x000000000002df89
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 torsoprintRequestRevision:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x000000000002de30
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x000000000002de14

@end

