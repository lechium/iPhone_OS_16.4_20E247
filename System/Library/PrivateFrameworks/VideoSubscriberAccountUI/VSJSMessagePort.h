//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@protocol VSJSMessagePortDelegate;

__attribute__((visibility("hidden")))
@interface VSJSMessagePort : IKJSObject
{
    id <VSJSMessagePortDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001509b
@property(nonatomic) __weak id <VSJSMessagePortDelegate> delegate; // @synthesize delegate=_delegate;
- (void)postMessage:(id)arg1;	// IMP=0x0000000000014e7c

@end
