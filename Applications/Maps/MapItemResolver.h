//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSError, NSMutableArray;
@protocol MKLocationManagerOperation, MKMapServiceTicket, MapItemResolverDelegate, OS_dispatch_group, PersonalizedItem;

@interface MapItemResolver : NSObject
{
    NSObject<OS_dispatch_group> *_resolveGroup;	// 8 = 0x8
    CDUnknownBlockType _resolveBlock;	// 16 = 0x10
    int _hasStarted;	// 24 = 0x18
    id <MKMapServiceTicket> _ticket;	// 32 = 0x20
    id <MKLocationManagerOperation> _locationOperation;	// 40 = 0x28
    NSMutableArray *_cancelHandlers;	// 48 = 0x30
    _Bool _canceled;	// 56 = 0x38
    _Bool _hasNearestStation;	// 57 = 0x39
    NSError *_error;	// 64 = 0x40
    MKMapItem *_resolvedMapItem;	// 72 = 0x48
    id <PersonalizedItem> _resolvedPlace;	// 80 = 0x50
    id _context;	// 88 = 0x58
    id <MapItemResolverDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000004ec328
@property(nonatomic) _Bool hasNearestStation; // @synthesize hasNearestStation=_hasNearestStation;
@property(nonatomic) __weak id <MapItemResolverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(getter=isCanceled) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) id <PersonalizedItem> resolvedPlace; // @synthesize resolvedPlace=_resolvedPlace;
@property(retain, nonatomic) MKMapItem *resolvedMapItem; // @synthesize resolvedMapItem=_resolvedMapItem;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)resolveAddressString:(id)arg1;	// IMP=0x00100000004ebdd1
- (void)resolveAddress:(id)arg1;	// IMP=0x00100000004ebce4
- (void)resolveNearestTransitStationForLabelMarker:(id)arg1;	// IMP=0x00100000004eb54d
- (void)resolveMapItem:(id)arg1;	// IMP=0x00100000004eadc1
- (void)resolveLabelMarker:(id)arg1;	// IMP=0x00100000004ea921
- (void)_addCancelationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000004ea857
- (void)cancel;	// IMP=0x00100000004ea6db
- (void)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004ea604
- (id)traits;	// IMP=0x00100000004ea561
- (id)initWithMapItem:(id)arg1;	// IMP=0x00100000004ea49b
- (id);	// IMP=0x00100000004ea3d5
- (id)initWithAddress:(id)arg1;	// IMP=0x00100000004ea30f
- (id)initWithLabelMarker:(id)arg1;	// IMP=0x00100000004ea249
- (id)init;	// IMP=0x00100000004ea1fa

@end

