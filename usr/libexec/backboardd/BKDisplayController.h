//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, NSMutableDictionary;

@interface BKDisplayController : NSObject
{
    BSCompoundAssertion *_observerAssertion;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSMutableDictionary *_lock_sceneHostSettingsByContextID;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0040000000003b2c
- (void).cxx_destruct;	// IMP=0x0020000000003b04
- (void)display:(id)arg1 didBlank:(_Bool)arg2;	// IMP=0x001000000000399c
- (CDStruct_c3a51bd1)geometryForDisplayUUID:(id)arg1;	// IMP=0x0010000000003926
- (void)applySceneHostSettingsToHostingChain:(id)arg1;	// IMP=0x00100000000036bd
- (void)removeSceneHostSettingsForContextID:(unsigned int)arg1;	// IMP=0x00100000000035c0
- (void)setSceneHostSettings:(id)arg1 forContextID:(unsigned int)arg2;	// IMP=0x001000000000349c
- (void)setSceneHostSettings:(id)arg1;	// IMP=0x00100000000033af
- (unsigned int)taskPortForContextID:(unsigned int)arg1 displayUUID:(id)arg2;	// IMP=0x00100000000033a3
- (unsigned int)hostContextIDForEmbeddedContextID:(unsigned int)arg1 displayUUID:(id)arg2;	// IMP=0x0010000000003349
- (struct CGPoint)convertCAScreenLocation:(struct CGPoint)arg1 toContextID:(unsigned int)arg2 displayUUID:(id)arg3;	// IMP=0x001000000000333a
- (struct CGPoint)convertReferenceLocation:(struct CGPoint)arg1 toCAScreenLocationForDisplayUUID:(id)arg2;	// IMP=0x001000000000332d
- (_Bool)contextIDAtCAScreenLocation:(struct CGPoint)arg1 displayUUID:(id)arg2 options:(id)arg3 results:(out CDStruct_2cb78f1a *)arg4;	// IMP=0x0010000000002c98
- (id)addDisplayBlankingObserver:(id)arg1;	// IMP=0x0010000000002bd8
- (_Bool)displayIsBlanked:(id)arg1;	// IMP=0x0010000000002b93
- (id)init;	// IMP=0x0010000000002b36

@end
