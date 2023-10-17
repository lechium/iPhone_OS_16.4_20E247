//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <JavaScriptCore/JSValue.h>

@interface JSValue (WebKitExtras)
- (void)_awaitThenableResolutionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00300000000e1e6a
@property(readonly, nonatomic, getter=_isThenable) _Bool _thenable;
@property(readonly, nonatomic, getter=_isRegularExpression) _Bool _regularExpression;
@property(readonly, nonatomic, getter=_isFunction) _Bool _function;
- (id)_toSortedJSONString;	// IMP=0x00300000000e1b20
- (id)_toJSONString;	// IMP=0x00300000000e1a5a
@end
