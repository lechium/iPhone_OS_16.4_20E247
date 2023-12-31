//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _MRTelevisionControllerBlockCallback;

__attribute__((visibility("hidden")))
@interface MRTelevisionController
{
    _MRTelevisionControllerBlockCallback *_discoveryCallback;	// 8 = 0x8
    _MRTelevisionControllerBlockCallback *_removalCallback;	// 16 = 0x10
}

+ (Class)externalDeviceClass;	// IMP=0x0010000000184f8f
- (void).cxx_destruct;	// IMP=0x000000000018531c
@property(retain, nonatomic) _MRTelevisionControllerBlockCallback *removalCallback; // @synthesize removalCallback=_removalCallback;
@property(retain, nonatomic) _MRTelevisionControllerBlockCallback *discoveryCallback; // @synthesize discoveryCallback=_discoveryCallback;
- (void)externalDeviceController:(id)arg1 didRemoveDevice:(id)arg2;	// IMP=0x0000000000185139
- (void)externalDeviceController:(id)arg1 didDiscoverDevice:(id)arg2;	// IMP=0x0000000000184fa0
- (id)init;	// IMP=0x0000000000184f36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

