//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListenerEndpoint;

@interface MFDOpenComposeDelegateConfiguration : NSObject
{
    _Bool _isEntitledDelegate;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSXPCListenerEndpoint *_delegateEndpoint;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000007a062
@property(nonatomic) _Bool isEntitledDelegate; // @synthesize isEntitledDelegate=_isEntitledDelegate;
@property(retain, nonatomic) NSXPCListenerEndpoint *delegateEndpoint; // @synthesize delegateEndpoint=_delegateEndpoint;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0010000000079f3e
- (id)initWithIdentifier:(id)arg1 delegateEndpoint:(id)arg2 isEntitledDelegate:(_Bool)arg3;	// IMP=0x0010000000079e7b

@end

