//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject;
@protocol OS_dispatch_queue, VOTElementRotorDelegate><VOTCustomActionContext;

@interface VOTElementRotor
{
    NSArray *_enabledWebRotorItems;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_enabledWebRotorItemsQueue;	// 88 = 0x58
    _Bool _showsWebSearchResults;	// 96 = 0x60
    long long _temporaryRotorTypeNeedingPromotion;	// 104 = 0x68
    _Bool _ignoreDefaultTypeAutofill;	// 112 = 0x70
    CDUnknownBlockType _updatedWebRotorItemsCallback;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000d52f2
@property(copy, nonatomic) CDUnknownBlockType updatedWebRotorItemsCallback; // @synthesize updatedWebRotorItemsCallback=_updatedWebRotorItemsCallback;
@property(nonatomic) _Bool ignoreDefaultTypeAutofill; // @synthesize ignoreDefaultTypeAutofill=_ignoreDefaultTypeAutofill;
@property(nonatomic) _Bool showsWebSearchResults; // @synthesize showsWebSearchResults=_showsWebSearchResults;
- (_Bool)customActionsAreDragDrop:(id)arg1;	// IMP=0x00100000000d4fc5
- (_Bool)customActionsAreValid:(id)arg1;	// IMP=0x00100000000d4d1f
- (void)updateRotorForElement:(id)arg1 shouldPreserveRotorNavigation:(_Bool)arg2 firstResponder:(id)arg3;	// IMP=0x00100000000d1f25
- (void)updateRotorForElement:(id)arg1 shouldPreserveRotorNavigation:(_Bool)arg2;	// IMP=0x00100000000d1f10
- (_Bool)rotorTypeIsValid:(long long)arg1 eventOrigin:(long long)arg2;	// IMP=0x00100000000d1c20
- (void)nanoUpdateRotorForElement:(id)arg1;	// IMP=0x00100000000d1745
- (void)_promoteGesturedTextInputRotorIfNeeded;	// IMP=0x00100000000d166d
- (void)_depromoteMLElementSupport;	// IMP=0x00100000000d15ef
- (id)_currentEnabledWebRotorItems;	// IMP=0x00100000000d14e2
- (void)_updateWebRotorItems;	// IMP=0x00100000000d10d8
- (_Bool)_customPublicRotorInRotor:(id)arg1;	// IMP=0x00100000000d0ecd
- (long long)_firstNonGesturedTextInputRotorTypeWithFallback:(long long)arg1;	// IMP=0x00100000000d0ca1
- (void)dealloc;	// IMP=0x00100000000d0c57
- (id)init;	// IMP=0x00100000000d0a3c

// Remaining properties
@property(nonatomic) __weak id <VOTElementRotorDelegate><VOTCustomActionContext> delegate; // @dynamic delegate;

@end
