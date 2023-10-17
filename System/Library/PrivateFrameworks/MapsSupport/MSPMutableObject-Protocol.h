//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPIdentifiable-Protocol.h>
#import <MapsSupport/MSPTransferableToImmutable-Protocol.h>
#import <MapsSupport/NSMutableCopying-Protocol.h>

@class Protocol;

@protocol MSPMutableObject <NSMutableCopying, MSPIdentifiable, MSPTransferableToImmutable>
+ (Protocol *)immutableObjectProtocol;
+ (Class)immutableObjectClass;
- (id)mutableCopy;
@end
