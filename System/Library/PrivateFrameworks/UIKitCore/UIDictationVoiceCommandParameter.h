//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationVoiceCommandParameter : NSObject
{
    NSString *_text;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b29463
- (void).cxx_destruct;	// IMP=0x0000000000b295cc
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b29522
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b294ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b2946b

@end
