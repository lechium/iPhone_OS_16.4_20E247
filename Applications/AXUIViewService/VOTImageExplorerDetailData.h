//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VOTImageExplorerDetailData : NSObject
{
    NSString *_key;	// 8 = 0x8
    NSArray *_values;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000005080
- (void).cxx_destruct;	// IMP=0x0020000000005380
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000005200
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000050a0
- (id)initWithKey:(id)arg1 values:(id)arg2;	// IMP=0x0010000000004f80

@end

