//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNMPContext;

__attribute__((visibility("hidden")))
@interface VNMomentProcessor : NSObject
{
    VNMPContext *_context;	// 8 = 0x8
}

+ (id)sortImageDescriptorsChronologically:(id)arg1;	// IMP=0x00600000000a4bb5
- (void).cxx_destruct;	// IMP=0x00000000000a481a
@property(retain, nonatomic) VNMPContext *context; // @synthesize context=_context;
- (id)getKey:(id)arg1 fromDictionary:(id)arg2 withDefault:(id)arg3;	// IMP=0x00000000000a4736
- (id)computeNaturalClusteringForClusteringTree:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a45e9
- (id)computeClusteringForClusteringTree:(id)arg1 usingThreshold:(float)arg2 error:(id *)arg3;	// IMP=0x00000000000a4492
- (id)computeClusteringForClusteringTree:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000a433d
- (id)performClustersPostprocessing:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a4327
- (id)convertClusterNodesListToDescriptorsList:(vector_f43821d3)arg1;	// IMP=0x00000000000a41ec
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 assumeDescriptorsAreSorted:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000a404c
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a4025
- (id)computeNaturalClusteringOfImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a3f50
- (id)computeClusteringOfImageDescriptors:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000a3e6c
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a37af

@end

