//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORPCorrectedSearch, HistoryEntryRecentsItem, NSArray, NSString;
@protocol RAPAuxiliaryControlsRecording;

@interface HistoryRAPUserSearch : NSObject
{
    GEORPCorrectedSearch *_template;	// 8 = 0x8
    _Bool _hasOriginatingAuxiliaryControlIndex;	// 16 = 0x10
    NSString *_searchText;	// 24 = 0x18
    NSString *_locationDisplayString;	// 32 = 0x20
    HistoryEntryRecentsItem *_historyItem;	// 40 = 0x28
    NSArray *_auxiliaryControls;	// 48 = 0x30
    unsigned long long _originatingAuxiliaryControlIndex;	// 56 = 0x38
}

+ (void)loadAllSearchesFromStorage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x002000000087a1ce
- (void).cxx_destruct;	// IMP=0x002000000087a9b2
@property(readonly, nonatomic) unsigned long long originatingAuxiliaryControlIndex; // @synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex;
@property(readonly, nonatomic) _Bool hasOriginatingAuxiliaryControlIndex; // @synthesize hasOriginatingAuxiliaryControlIndex=_hasOriginatingAuxiliaryControlIndex;
@property(readonly, nonatomic) NSArray *auxiliaryControls; // @synthesize auxiliaryControls=_auxiliaryControls;
@property(readonly, nonatomic) HistoryEntryRecentsItem *historyItem; // @synthesize historyItem=_historyItem;
@property(readonly, nonatomic) NSString *locationDisplayString; // @synthesize locationDisplayString=_locationDisplayString;
@property(readonly, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (id)geoMapItemForSearchResultAtIndex:(unsigned long long)arg1;	// IMP=0x001000000087a8c7
@property(readonly, nonatomic) unsigned long long searchResultsCount;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000087a86f
@property(readonly, nonatomic) id <RAPAuxiliaryControlsRecording> auxiliaryControlsRecording;
- (void)applyToCorrectedSearch:(id)arg1;	// IMP=0x001000000087a850
- (id)initWithHistoryItem:(id)arg1 correctedSearchTemplate:(id)arg2 auxiliaryControls:(id)arg3 originatingIndex:(unsigned long long)arg4;	// IMP=0x001000000087a69b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

