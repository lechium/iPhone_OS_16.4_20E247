//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFSearchResult.h>

@class NSURL, SFText;

__attribute__((visibility("hidden")))
@interface SFLocalSearchResult : SFSearchResult
{
    NSURL *_url;	// 8 = 0x8
    SFText *_title;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b0f06
- (void)setTitle:(id)arg1;	// IMP=0x00000000000b0ef2
- (id)title;	// IMP=0x00000000000b0ee1
- (void)setUrl:(id)arg1;	// IMP=0x00000000000b0ecd
- (id)url;	// IMP=0x00000000000b0ebc
- (id)initWithCompletionMatch:(id)arg1;	// IMP=0x00000000000b0d52

@end
