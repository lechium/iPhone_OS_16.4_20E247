//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADTextField
{
    NSString *mText;	// 16 = 0x10
    OADParagraphProperties *mParagraphProperties;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003289dc
- (void)removeUnnecessaryOverrides;	// IMP=0x0000000000033a9f
- (void)setText:(id)arg1;	// IMP=0x000000000002d678
- (id)text;	// IMP=0x00000000000ab881
- (id)paragraphProperties;	// IMP=0x00000000001c8e5e
- (unsigned long long)characterCount;	// IMP=0x00000000003289bf
- (_Bool)isEmpty;	// IMP=0x000000000015146a
- (id)init;	// IMP=0x000000000002d39b

@end

