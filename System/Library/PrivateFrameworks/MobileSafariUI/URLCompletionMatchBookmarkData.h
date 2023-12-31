//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WebBookmark;

__attribute__((visibility("hidden")))
@interface URLCompletionMatchBookmarkData : NSObject
{
    _Bool _shouldPreload;	// 8 = 0x8
    WebBookmark *_bookmark;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a5863
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) _Bool shouldPreload; // @synthesize shouldPreload=_shouldPreload;
- (float)_topSitesScoreAtTime:(double)arg1;	// IMP=0x00000000000a5736
- (long long)visitCountScoreForPageTitleAtTime;	// IMP=0x00000000000a5729
- (long long)visitCountScoreForURLStringAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a571c
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;	// IMP=0x00000000000a570a
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;	// IMP=0x00000000000a56f8
- (_Bool)matchesAutocompleteTrigger:(id)arg1 isStrengthened:(_Bool)arg2;	// IMP=0x00000000000a56f0
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a5679
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a5601
- (id)matchDataByMergingWithMatchData:(id)arg1;	// IMP=0x00000000000a5581
@property(readonly, nonatomic) _Bool lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) _Bool containsBookmark;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a54dc
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a54ca
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a54b8
- (id)pageTitleAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a54a2
@property(readonly, nonatomic) NSString *originalURLString;
- (id)_userVisibleURLString;	// IMP=0x00000000000a53e8
- (id)initWithBookmark:(id)arg1 shouldPreload:(_Bool)arg2;	// IMP=0x00000000000a53ab
- (id)initWithBookmark:(id)arg1;	// IMP=0x00000000000a5317

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long visitCount;
@property(readonly, nonatomic) long long visitCountScore;
@property(readonly, nonatomic) _Bool visitWasClientError;

@end

