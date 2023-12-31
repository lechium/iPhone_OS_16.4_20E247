//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpotlightUIInternal/NSObject-Protocol.h>

@class SPSearchQueryContext, SPUISearchHeader;

@protocol SPUISearchHeaderDelegate <NSObject>
- (void)highlightResultAfterUnmarkingText;
- (void)removeCompletionAndHighlightAsTyped:(_Bool)arg1;
- (void)returnKeyPressed;
- (void)cancelButtonPressed;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (void)queryContextDidChange:(SPSearchQueryContext *)arg1 fromSearchHeader:(SPUISearchHeader *)arg2 allowZKW:(_Bool)arg3;
@end

