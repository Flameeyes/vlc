/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRController.h>

@class BRMusicPlayer, NSTimer;

@interface BRMusicNowPlayingController : BRController
{
    BRMusicPlayer *_player;
    NSTimer *_screenSaverUpdateTimer;
    BOOL _allowsScreenSaver;
}

- (id)init;
- (void)dealloc;
- (void)controlWasActivated;
- (void)wasPushed;
- (void)wasPopped;
- (void)willBeExhumed;
- (void)willBePushed;
- (void)willBePopped;
- (void)willBeBuried;
- (void)wasExhumedByPoppingController:(id)fp8;

@end

