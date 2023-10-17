//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPStoreLyricsSnippetURLComponents, NSOperation;

__attribute__((visibility("hidden")))
@interface LPAppleMusicLyricExcerptFetcher
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSOperation *_operation;	// 16 = 0x10
    MPStoreLyricsSnippetURLComponents *_lyricComponents;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000054641
@property(retain, nonatomic) MPStoreLyricsSnippetURLComponents *lyricComponents; // @synthesize lyricComponents=_lyricComponents;
- (void)completedWithLyrics:(id)arg1;	// IMP=0x000000000005448a
- (void)cancel;	// IMP=0x000000000005444a
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000540e6
- (id)init;	// IMP=0x0000000000054098

@end
