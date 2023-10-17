//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAuditToken, NSUUID;

@interface PUIDPointerClient : NSObject
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    BSAuditToken *_auditToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000238b7
@property(readonly, nonatomic) BSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) int pid;
- (id)description;	// IMP=0x0010000000023809
- (id);	// IMP=0x0010000000023765

@end
