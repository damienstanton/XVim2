//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:42:15).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSplitView.h>

#import <DVTCocoaAdditionsKit/DVTDelegateValidator-Protocol.h>

@class NSString;

@interface NSSplitView (DVTNSSplitViewAdditions) <DVTDelegateValidator>
- (void)dvt_validateDelegate;
- (void)_dvt_setDelegate:(id)arg1;
- (void)_dvt_mouseDown:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

