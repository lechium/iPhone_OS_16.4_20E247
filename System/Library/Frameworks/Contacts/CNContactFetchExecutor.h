//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNContactFetchExecutor : NSObject
{
    CNContactFetchRequest *_request;	// 8 = 0x8
    CNContactStore *_store;	// 16 = 0x10
}

+ (id)os_log;	// IMP=0x00600000000298bc
- (void).cxx_destruct;	// IMP=0x000000000002a01f
@property(readonly, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) CNContactFetchRequest *request; // @synthesize request=_request;
- (id)run:(id *)arg1;	// IMP=0x0000000000029aac
- (id)description;	// IMP=0x00000000000299c0
- (id)initWithRequest:(id)arg1 store:(id)arg2;	// IMP=0x0000000000029918

@end
