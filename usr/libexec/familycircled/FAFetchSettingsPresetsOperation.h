//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol FAPresetsProviderProtocol;

@interface FAFetchSettingsPresetsOperation : NSObject
{
    CDUnknownBlockType _familyCircleProvider;	// 8 = 0x8
    id <FAPresetsProviderProtocol> _presetsProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006b5a
@property(retain, nonatomic) id <FAPresetsProviderProtocol> presetsProvider; // @synthesize presetsProvider=_presetsProvider;
@property(copy, nonatomic) CDUnknownBlockType familyCircleProvider; // @synthesize familyCircleProvider=_familyCircleProvider;
- (id)presetsForMemberWithAltDSID:(id)arg1 age:(id)arg2;	// IMP=0x001000000000601a
- (id)presetsForMemberWithAltDSID:(id)arg1;	// IMP=0x0010000000006006
- (id)_presetsWithCurrentConfiguration:(id)arg1 expectedPreset:(id)arg2;	// IMP=0x001000000000594c
- (id)_currentPresets:(id)arg1 expectedPreset:(id)arg2;	// IMP=0x00100000000055a2
- (id)initWithFamilyCircleProvider:(CDUnknownBlockType)arg1 fetchFromCache:(_Bool)arg2;	// IMP=0x001000000000542d
- (id)initWithFamilyCircleProvider:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005419
- (id)initWithFamilyCircleProvider:(CDUnknownBlockType)arg1 presetsProvider:(id)arg2;	// IMP=0x001000000000537d

@end
