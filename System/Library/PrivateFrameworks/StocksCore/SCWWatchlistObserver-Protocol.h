//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, SCWWatchlistManager, SCWWatchlistOrderDiff;

@protocol SCWWatchlistObserver
- (void)watchlistManager:(SCWWatchlistManager *)arg1 didChangeInWatchlistOrder:(SCWWatchlistOrderDiff *)arg2;
- (void)watchlistManager:(SCWWatchlistManager *)arg1 didChangeInWatchlist:(NSDictionary *)arg2;
@end
