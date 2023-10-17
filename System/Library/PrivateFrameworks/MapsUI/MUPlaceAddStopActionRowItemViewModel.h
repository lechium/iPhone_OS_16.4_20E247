//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUActionRowItemViewModel.h"

@class GEOMapItemDetourInfo, MKETAProvider, NSString;

__attribute__((visibility("hidden")))
@interface MUPlaceAddStopActionRowItemViewModel : MUActionRowItemViewModel
{
    _Bool _hiddenWhileWaitingForETA;	// 8 = 0x8
    double _etaTravelTime;	// 16 = 0x10
    _Bool _isSearchAlongRoute;	// 24 = 0x18
    _Bool _canShowDetourTime;	// 25 = 0x19
    MKETAProvider *_etaProvider;	// 32 = 0x20
    GEOMapItemDetourInfo *_detourInfo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000b6501
@property(readonly, nonatomic) _Bool canShowDetourTime; // @synthesize canShowDetourTime=_canShowDetourTime;
@property(readonly, nonatomic) GEOMapItemDetourInfo *detourInfo; // @synthesize detourInfo=_detourInfo;
@property(readonly, nonatomic) MKETAProvider *etaProvider; // @synthesize etaProvider=_etaProvider;
@property(readonly, nonatomic) _Bool isSearchAlongRoute; // @synthesize isSearchAlongRoute=_isSearchAlongRoute;
- (id)analyticsButtonValue;	// IMP=0x00000000000b64b5
- (void)ETAProviderUpdated:(id)arg1;	// IMP=0x00000000000b6428
- (id)accessibilityIdentifier;	// IMP=0x00000000000b6405
- (id)preferredBackgroundColor;	// IMP=0x00000000000b63ec
- (id)preferredTintColor;	// IMP=0x00000000000b63d3
- (id)titleText;	// IMP=0x00000000000b62bd
- (id)symbolName;	// IMP=0x00000000000b62b0
- (_Bool)isHidden;	// IMP=0x00000000000b627d
- (_Bool)isEnabled;	// IMP=0x00000000000b6243
- (id)initWithSearchAlongRoute:(_Bool)arg1 ETAProvider:(id)arg2 detourInfo:(id)arg3 canShowDetourTime:(_Bool)arg4;	// IMP=0x00000000000b60c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
