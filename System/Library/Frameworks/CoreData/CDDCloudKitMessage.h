//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface CDDCloudKitMessage : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000018e83a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018e8b8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018e842
- (void)dealloc;	// IMP=0x000000000018e7ff
- (id)init;	// IMP=0x000000000018e7b3

@end
