//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalSerializer/NSObject-Protocol.h>

@class MTLByteIterator;

@protocol MTLDeserializerDecoder <NSObject>
@property(readonly) unsigned char type;
- (void)fault;
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(MTLByteIterator *)arg2;
@end
