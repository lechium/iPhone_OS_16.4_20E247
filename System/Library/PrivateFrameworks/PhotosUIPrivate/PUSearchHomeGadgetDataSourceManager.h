//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class NSArray, NSString, PXSearchZeroKeywordDataSource, PXTapToRadarGadgetProvider;

__attribute__((visibility("hidden")))
@interface PUSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager
{
    NSArray *_gadgetProviders;	// 8 = 0x8
    PXSearchZeroKeywordDataSource *_zeroKeywordDataSource;	// 16 = 0x10
    NSArray *_zeroKeywordGadgetProviders;	// 24 = 0x18
    PXTapToRadarGadgetProvider *_tapToRadarProvider;	// 32 = 0x20
    long long _filteringState;	// 40 = 0x28
    CDUnknownBlockType _zeroKeywordSectionsUpdateHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000447c9d
@property(copy, nonatomic) CDUnknownBlockType zeroKeywordSectionsUpdateHandler; // @synthesize zeroKeywordSectionsUpdateHandler=_zeroKeywordSectionsUpdateHandler;
@property(nonatomic) long long filteringState; // @synthesize filteringState=_filteringState;
@property(retain, nonatomic) PXTapToRadarGadgetProvider *tapToRadarProvider; // @synthesize tapToRadarProvider=_tapToRadarProvider;
@property(retain, nonatomic) NSArray *zeroKeywordGadgetProviders; // @synthesize zeroKeywordGadgetProviders=_zeroKeywordGadgetProviders;
@property(readonly, nonatomic) PXSearchZeroKeywordDataSource *zeroKeywordDataSource; // @synthesize zeroKeywordDataSource=_zeroKeywordDataSource;
- (void)ppt_prepareZeroKeywordRequest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000447be1
- (void)didUpdateSections:(id)arg1;	// IMP=0x00000000004479b8
- (id)zeroKeywordSections;	// IMP=0x0000000000447968
- (void)refreshData;	// IMP=0x0000000000447882
- (void)_waitForFirstDisplayTimedOut;	// IMP=0x0000000000447834
- (id)hiddenGadgetProviders;	// IMP=0x00000000004475ca
@property(readonly, nonatomic) _Bool isExpectedToLoadNonEmptyDataSourceSoon;
- (_Bool)_zeroKeywordDataSourceHasZeroKeywords;	// IMP=0x0000000000447574
- (id)gadgetProviders;	// IMP=0x00000000004473ba
- (id)init;	// IMP=0x00000000004472b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

