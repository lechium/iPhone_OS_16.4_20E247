//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WFImgArrayCache;
@protocol WFWebPageProtocol;

__attribute__((visibility("hidden")))
@interface WFWebPageDecorator : NSObject
{
    NSObject<WFWebPageProtocol> *webPageStripper;	// 8 = 0x8
    WFImgArrayCache *pageImagesPropertyCache;	// 16 = 0x10
    NSString *URLString;	// 24 = 0x18
}

+ (id)webPageWithString:(id)arg1 URLString:(id)arg2;	// IMP=0x0010000000006aef
+ (id)webPageWithString:(id)arg1;	// IMP=0x0010000000006ab8
+ (id)webPageWithData:(id)arg1 URLString:(id)arg2;	// IMP=0x0010000000006a5f
+ (id)webPageWithData:(id)arg1;	// IMP=0x0010000000006a28
+ (id)plainTextWithWebPageString:(id)arg1;	// IMP=0x00100000000069fa
+ (id)plainTextWithWebPageData:(id)arg1;	// IMP=0x00100000000069cc
+ (id)_plainTextWithSelector:(SEL)arg1 object:(id)arg2;	// IMP=0x0010000000006917
@property(retain) NSString *URLString; // @synthesize URLString;
- (void)dealloc;	// IMP=0x0000000000007262
- (id)plainText;	// IMP=0x0000000000007230
- (id)rawPlainText;	// IMP=0x00000000000070c1
- (id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2 weight:(int)arg3;	// IMP=0x0000000000006fc7
- (id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2;	// IMP=0x0000000000006faf
- (id)tags;	// IMP=0x0000000000006f93
- (long long)wordCount;	// IMP=0x0000000000006f8b
- (id)linkTitlesText;	// IMP=0x0000000000006e08
- (long long)numberOfKnownImagePixels;	// IMP=0x0000000000006dd9
- (long long)numberOfUnknownSizedImages;	// IMP=0x0000000000006daa
- (id)imageAltsText;	// IMP=0x0000000000006d7b
- (long long)numberOfImages;	// IMP=0x0000000000006d50
- (void)_cacheImgProperties;	// IMP=0x0000000000006cfa
- (_Bool)hasShortRefresh;	// IMP=0x0000000000006ce4
- (_Bool)hasFrameset;	// IMP=0x0000000000006cce
- (id)links;	// IMP=0x0000000000006cb8
- (id)pageContent;	// IMP=0x0000000000006ca2
- (id)images;	// IMP=0x0000000000006c8c
- (id)scriptBlocks;	// IMP=0x0000000000006c76
- (id)metaTagsUnlabeled;	// IMP=0x0000000000006c60
- (id)metaTagsLabeled;	// IMP=0x0000000000006c4a
- (id)metaTagKeywords;	// IMP=0x0000000000006c34
- (id)metaTagDescription;	// IMP=0x0000000000006c1e
- (id)pageTitle;	// IMP=0x0000000000006c08
- (id)initWithWebPageStripper:(id)arg1;	// IMP=0x0000000000006bb8
- (id)initWithWebPageString:(id)arg1;	// IMP=0x0000000000006b80
- (id)initWithWebPageData:(id)arg1;	// IMP=0x0000000000006b48

@end
