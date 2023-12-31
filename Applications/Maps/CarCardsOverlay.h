//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarCardsUpdate, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString, UIView;
@protocol CarCardViewDelegate, ChromeOverlayHosting;

@interface CarCardsOverlay : NSObject
{
    CarCardsUpdate *_pendingUpdates;	// 8 = 0x8
    CarCardsUpdate *_runningUpdates;	// 16 = 0x10
    _Bool _showDebugVisualisation;	// 24 = 0x18
    id <ChromeOverlayHosting> _host;	// 32 = 0x20
    id <CarCardViewDelegate> _cardDelegate;	// 40 = 0x28
    UIView *_contentView;	// 48 = 0x30
    NSMutableOrderedSet *_configurationKeys;	// 56 = 0x38
    NSMutableDictionary *_configurationsByKey;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000952eac
@property(retain, nonatomic) NSMutableDictionary *configurationsByKey; // @synthesize configurationsByKey=_configurationsByKey;
@property(retain, nonatomic) NSMutableOrderedSet *configurationKeys; // @synthesize configurationKeys=_configurationKeys;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <CarCardViewDelegate> cardDelegate; // @synthesize cardDelegate=_cardDelegate;
@property(nonatomic) __weak id <ChromeOverlayHosting> host; // @synthesize host=_host;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (void)cardsUpdate:(id)arg1 finalizeUpdate:(unsigned long long)arg2 withCardConfigurations:(id)arg3;	// IMP=0x0010000000952694
- (void)cardsUpdateWantsLayout:(id)arg1;	// IMP=0x00100000009524a8
- (void)cardsUpdate:(id)arg1 applyConfigurations:(id)arg2;	// IMP=0x0010000000951e79
- (void)cardsUpdate:(id)arg1 prepareForUpdate:(unsigned long long)arg2 withCardConfigurations:(id)arg3;	// IMP=0x0010000000951b1b
- (void)reset;	// IMP=0x001000000095189c
- (void)_captureInsetContraintsFromConfigurations;	// IMP=0x00100000009513ad
- (void)_setCardConfiguration:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000095129d
- (id)_configurationForKey:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x001000000095115f
- (void)_validatePendingUpdates;	// IMP=0x0010000000950e04
- (_Bool)_shouldInterruptUpdates:(id)arg1 toRunUpdates:(id)arg2;	// IMP=0x0010000000950d8e
- (void)_updateDidComplete:(id)arg1;	// IMP=0x0010000000950c8e
- (void)_runNextUpdate;	// IMP=0x001000000095095c
- (id)_batchedUpdates;	// IMP=0x001000000095094e
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 withAnimation:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000009505e9
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 withAnimation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000950559
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000095053f
- (void)dismissAllCardsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000950108
- (void)showCard:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000094fff9
- (void)hideCard:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000094fee7
- (void)deleteCard:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000094fcc8
- (void)presentAllCardsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000094f830
- (void)insertCard:(id)arg1 animated:(_Bool)arg2 configurationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000094f589
- (void)configureCard:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000094f34f
- (_Bool)isCardHidden:(id)arg1;	// IMP=0x001000000094f2d2
- (_Bool)hasCard:(id)arg1;	// IMP=0x001000000094f29d
- (void)_refreshPinningConstraints;	// IMP=0x001000000094f0b6
- (void)_userDefaultsChanged:(id)arg1;	// IMP=0x001000000094ebbb
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000094eb95
@property(nonatomic, getter=isHidden) _Bool hidden;
- (id)init;	// IMP=0x001000000094e6ce
- (void)dealloc;	// IMP=0x001000000094e610

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

