//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface PKPaymentTransactionMapsUpdateProcessorRequest : NSObject
{
    NSMutableArray *_configurations;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000007e10
@property(readonly, copy, nonatomic) NSArray *configurations; // @synthesize configurations=_configurations;
- (id)description;	// IMP=0x0010000000007dcd
- (id)mapIdentifiers;	// IMP=0x0010000000007b6a
- (_Bool)coalesceWithConfigurations:(id)arg1;	// IMP=0x0010000000007a42
- (id)initWithConfigurations:(id)arg1;	// IMP=0x00100000000079e5

@end

