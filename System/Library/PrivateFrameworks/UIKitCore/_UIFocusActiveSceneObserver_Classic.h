//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusActiveSceneObserver_Classic
{
    NSMapTable *_hidObserverMapTable;	// 16 = 0x10
    struct {
        unsigned int supportsHIDUpdates:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017a204
- (id)descriptionBuilder;	// IMP=0x000000000017a147
- (void)_keyWindowDidChangeNotification:(id)arg1;	// IMP=0x000000000017a0d2
- (void)observerDeliveryPolicyDidChange:(id)arg1;	// IMP=0x000000000017a05d
- (void)_windowDidDetachContext:(id)arg1;	// IMP=0x0000000000179fdf
- (void)_windowDidAttachContext:(id)arg1;	// IMP=0x0000000000179f61
- (void)_removeDeliverObserverForWindow:(id)arg1;	// IMP=0x0000000000179ec6
- (void)_addDeliveryObserverForWindow:(id)arg1;	// IMP=0x0000000000179cbe
- (_Bool)isActive;	// IMP=0x0000000000179a42
- (void)dealloc;	// IMP=0x00000000001798a9
- (void)stopMonitoringContextChangesForWindow:(id)arg1;	// IMP=0x00000000001797b4
- (void)beginMonitoringContextChangesForWindow:(id)arg1;	// IMP=0x00000000001796b1
- (id)_initWithScene:(id)arg1;	// IMP=0x00000000001795db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

