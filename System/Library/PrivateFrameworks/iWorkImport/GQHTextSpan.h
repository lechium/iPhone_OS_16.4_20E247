//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQHTextSpan : NSObject
{
}

+ (int)nonWhitespaceCount:(struct __CFArray *)arg1;	// IMP=0x0080000000038bfa
+ (int)handleTextBackgroundForStyle:(id)arg1 destStyle:(id)arg2 state:(id)arg3;	// IMP=0x0080000000038a91
+ (int)handleTextListChild:(id)arg1 outputBlanks:(_Bool)arg2 state:(id)arg3;	// IMP=0x0080000000038778
+ (int)handleTextList:(id)arg1 checkForTrailingBlanks:(_Bool)arg2 state:(id)arg3;	// IMP=0x00800000000386c5
+ (int)handleSpan:(id)arg1 checkForTrailingBlanks:(_Bool)arg2 state:(id)arg3;	// IMP=0x0080000000038457
+ (int)handleContainerHint:(id)arg1 state:(id)arg2;	// IMP=0x0080000000038f57
+ (int)handleAttachment:(id)arg1 state:(id)arg2;	// IMP=0x0080000000038e6a
+ (int)handlePageStart:(id)arg1 state:(id)arg2;	// IMP=0x0080000000038e5f
+ (int)handleAutoNumber:(id)arg1 state:(id)arg2;	// IMP=0x0080000000038d8d
+ (int)handleTextMarker:(id)arg1 outputBlanks:(_Bool)arg2 state:(id)arg3;	// IMP=0x0080000000038c9d

@end
