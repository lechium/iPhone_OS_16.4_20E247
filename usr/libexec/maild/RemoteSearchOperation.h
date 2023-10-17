//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSProgress, NSString, SourceSearchContext;
@protocol MiniMallSource, RemoteSearchOperationDelegate;

@interface RemoteSearchOperation : NSOperation
{
    id <MiniMallSource> _source;	// 8 = 0x8
    SourceSearchContext *_searchContext;	// 16 = 0x10
    NSString *_logPrefix;	// 24 = 0x18
    NSProgress *_progress;	// 32 = 0x20
    id <RemoteSearchOperationDelegate> _delegate;	// 40 = 0x28
    CDUnknownBlockType _foundMessages;	// 48 = 0x30
    CDUnknownBlockType _stopEarly;	// 56 = 0x38
    CDUnknownBlockType _finishedSearchingSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000d474c
@property(copy, nonatomic) CDUnknownBlockType finishedSearchingSource; // @synthesize finishedSearchingSource=_finishedSearchingSource;
@property(copy, nonatomic) CDUnknownBlockType stopEarly; // @synthesize stopEarly=_stopEarly;
@property(copy, nonatomic) CDUnknownBlockType foundMessages; // @synthesize foundMessages=_foundMessages;
@property(readonly, nonatomic) __weak id <RemoteSearchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, copy, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
@property(readonly, nonatomic) SourceSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(readonly, nonatomic) id <MiniMallSource> source; // @synthesize source=_source;
- (id)_followUpContextForSearchContext:(id)arg1 searchResult:(id)arg2 totalSearchResultCount:(unsigned long long)arg3;	// IMP=0x00100000000d4359
- (void)_emitFoundMessagesForResult:(id)arg1 totalSearchResultCount:(inout unsigned long long *)arg2;	// IMP=0x00100000000d411e
- (void)main;	// IMP=0x00100000000d3a0d
- (id)initWithSource:(id)arg1 searchContext:(id)arg2 logPrefix:(id)arg3 progress:(id)arg4 delegate:(id)arg5;	// IMP=0x00100000000d38c3

@end
