#ifndef __STEREO_ON_WITH_CD_COMMAND_H_
#define __STEREO_ON_WITH_CD_COMMAND_H_

class StereOnWithCDCommand: public Command
{
private:
	Stereo stereo;

public:
	StereoOnWitchCDCommand(const Stereo &stereo)
	{
		this->stereo = stereo;
	}

	void execute()
	{
		stereo.on();
		stereo.off();
		stereo.setVolume();
	}
};

#endif
