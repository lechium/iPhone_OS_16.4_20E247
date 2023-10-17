//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class MISSING_TYPE, NSString;

@interface CLDMVisionService : CLIntersiloService
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> fDeviceMotionDispatcher;	// 8 = 0x8
    MISSING_TYPE *fGeomagneticModelProviderClient;	// 16 = 0x10
    double fDeclination;	// 24 = 0x18
    struct CLVisualLocalizationPropagation fVisualLocalizationPropagation;	// 32 = 0x20
}

+ (_Bool)isSupported;	// IMP=0x002000000068266c
+ (id)getSilo;	// IMP=0x0010000000682610
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006825f7
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000068259a
- (id).cxx_construct;	// IMP=0x0020000000682766
- (void).cxx_destruct;	// IMP=0x00100000006826ea
- (id)init;	// IMP=0x0010000000682699

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
