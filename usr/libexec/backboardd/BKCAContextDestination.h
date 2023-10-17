//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSSceneHostSettings, NSString;

@interface BKCAContextDestination : NSObject
{
    unsigned int _contextID;	// 8 = 0x8
    unsigned int _clientPort;	// 12 = 0xc
    BKSSceneHostSettings *_inheritedSceneHostSettings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002e2f7
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000002e260
- (void)appendSuccinctDescriptionToFormatter:(id)arg1;	// IMP=0x001000000002e1bd
- (id)succinctDescription;	// IMP=0x001000000002e157
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002e0c0
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002e032
- (id)initWithContextID:(unsigned int)arg1 clientPort:(unsigned int)arg2;	// IMP=0x001000000002dd69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
