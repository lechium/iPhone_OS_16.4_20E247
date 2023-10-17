//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <APFoundation/NSObject-Protocol.h>

@class NSData;

@protocol APSigningAuthorityPoolManagement <NSObject>
@property(readonly, nonatomic) long long state;
- (NSData *)signatureForRawData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)signatureForData:(NSData *)arg1 error:(id *)arg2;
- (_Bool)rotateWithError:(id *)arg1;
- (id)initWithPoolSize:(int)arg1;
@end
