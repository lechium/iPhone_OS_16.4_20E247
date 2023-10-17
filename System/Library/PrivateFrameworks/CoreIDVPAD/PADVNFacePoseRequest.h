//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PADModelLoader;
@protocol PADAuditDataRepository;

__attribute__((visibility("hidden")))
@interface PADVNFacePoseRequest : NSObject
{
    PADModelLoader *_models;	// 8 = 0x8
    id <PADAuditDataRepository> _audit;	// 16 = 0x10
    NSArray *_results;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000148d5
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
- (void)_storeCrop:(struct __CVBuffer *)arg1 forFrame:(id)arg2 observation:(id)arg3;	// IMP=0x000000000001462f
- (struct __CVBuffer *)_obtainFaceCrop:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000014341
- (_Bool)_detectFaceBounds:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013f15
- (_Bool)performOn:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013415
- (id)initWithModels:(id)arg1;	// IMP=0x0000000000013396

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
