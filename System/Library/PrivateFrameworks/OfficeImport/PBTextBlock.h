//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBTextBlock : NSObject
{
}

+ (void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3;	// IMP=0x0080000000029360
+ (void)applyTextRuler:(void *)arg1 toTextBlock:(id)arg2;	// IMP=0x00800000000a1ac3
+ (void)readParagraph:(id)arg1 paragraph:(struct __CFAttributedString *)arg2 textType:(int)arg3 state:(id)arg4;	// IMP=0x008000000002aa45
+ (void)readFromStyledText:(struct __CFAttributedString *)arg1 toStyledPargraphs:(struct __CFArray *)arg2;	// IMP=0x008000000002a7c4
+ (void)readFromTextBlock:(id)arg1 toStyledText:(struct __CFAttributedString *)arg2;	// IMP=0x008000000002a1bb

@end
